
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_info {int name; } ;
struct mic_copy_desc {unsigned int iovcnt; TYPE_1__* iov; } ;
struct TYPE_2__ {int iov_len; int iov_base; } ;


 int FUNC_0 (char*,int ,char const*,int,unsigned int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct mic_info *VAR_0, struct mic_copy_desc *VAR_1,
    const char *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->iovcnt; VAR_4++)
  FUNC_0("%s %s %d copy->iov[%d] addr %p len 0x%zx\n",
   VAR_0->name, VAR_2, VAR_3, VAR_4,
   VAR_1->iov[VAR_4].iov_base, VAR_1->iov[VAR_4].iov_len);
}
