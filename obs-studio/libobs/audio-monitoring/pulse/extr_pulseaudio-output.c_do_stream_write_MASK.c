
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t size; } ;
struct TYPE_3__ {size_t buffer_size; size_t bytesRemaining; int stream; TYPE_2__ new_data; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*,int *,size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,void**,size_t*) ;
 int FUNC_3 (int ,int *,size_t,int *,long long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 FUNC_0(VAR_2);
 uint8_t *VAR_3 = ((void*)0);

 while (VAR_1->new_data.size >= VAR_1->buffer_size &&
        VAR_1->bytesRemaining > 0) {
  size_t VAR_4 = VAR_1->buffer_size;

  if (VAR_4 > VAR_1->bytesRemaining)
   VAR_4 = VAR_1->bytesRemaining;

  FUNC_2(VAR_1->stream, (void **)&VAR_3,
          &VAR_4);

  FUNC_1(&VAR_1->new_data, VAR_3, VAR_4);

  FUNC_4();
  FUNC_3(VAR_1->stream, VAR_3, VAR_4, ((void*)0), 0LL,
    VAR_0);
  FUNC_5();

  VAR_1->bytesRemaining -= VAR_4;
 }
}
