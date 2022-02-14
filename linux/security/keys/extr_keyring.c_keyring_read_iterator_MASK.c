
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_read_iterator_context {scalar_t__ count; scalar_t__ buflen; int buffer; } ;
struct key {int serial; TYPE_1__* type; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ,scalar_t__,scalar_t__) ;
 struct key* FUNC_1 (void const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, void *VAR_1)
{
 struct keyring_read_iterator_context *VAR_2 = VAR_1;
 const struct key *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_0("{%s,%d},,{%zu/%zu}",
        VAR_3->type->name, VAR_3->serial, VAR_2->count, VAR_2->buflen);

 if (VAR_2->count >= VAR_2->buflen)
  return 1;

 VAR_4 = FUNC_2(VAR_3->serial, VAR_2->buffer);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_2->buffer++;
 VAR_2->count += sizeof(VAR_3->serial);
 return 0;
}
