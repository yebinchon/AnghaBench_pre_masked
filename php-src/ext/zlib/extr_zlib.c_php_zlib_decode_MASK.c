
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t avail_in; int * next_in; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,size_t,char**,size_t*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_8, size_t VAR_9, char **VAR_10, size_t *VAR_11, int VAR_12, size_t VAR_13)
{
 int VAR_14 = 129;
 z_stream VAR_15;

 FUNC_2(&VAR_15, 0, sizeof(z_stream));
 VAR_15.zalloc = VAR_6;
 VAR_15.zfree = VAR_7;

 if (VAR_9) {
retry_raw_inflate:
  VAR_14 = FUNC_1(&VAR_15, VAR_12);
  if (VAR_5 == VAR_14) {
   VAR_15.next_in = (Bytef *) VAR_8;
   VAR_15.avail_in = VAR_9 + 1;

   switch (VAR_14 = FUNC_4(&VAR_15, VAR_13, VAR_10, VAR_11)) {
    case 128:
     FUNC_0(&VAR_15);
     return VAR_4;

    case 129:

     if (VAR_2 == VAR_12) {
      FUNC_0(&VAR_15);
      VAR_12 = VAR_3;
      goto retry_raw_inflate;
     }
   }
   FUNC_0(&VAR_15);
  }
 }

 *VAR_10 = ((void*)0);
 *VAR_11 = 0;

 FUNC_3(((void*)0), VAR_0, "%s", FUNC_5(VAR_14));
 return VAR_1;
}
