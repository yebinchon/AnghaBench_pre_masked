
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (void*,int,size_t,int *) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (char*,...) ;
 void* FUNC_8 (void*,size_t) ;
 int * VAR_2 ;
 int FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const char *VAR_3, void **VAR_4, unsigned int *VAR_5)
{
 size_t VAR_6 = 256;
 size_t VAR_7 = VAR_6;
 size_t VAR_8 = 0;
 void *VAR_9;
 FILE *VAR_10;

 if (!VAR_3) {
  *VAR_4 = ((void*)0);
  *VAR_5 = 0;
  return 0;
 }

 if (!FUNC_9(VAR_3, "-"))
  VAR_10 = VAR_2;
 else
  VAR_10 = FUNC_3(VAR_3, "r");
 if (!VAR_10) {
  FUNC_7("failed to open %s: %s", VAR_3, FUNC_10(VAR_1));
  return -1;
 }

 *VAR_4 = FUNC_6(VAR_6);
 if (!*VAR_4) {
  FUNC_7("failed to allocate memory for data_in/ctx_in: %s",
        FUNC_10(VAR_1));
  goto err_fclose;
 }

 while ((VAR_8 += FUNC_4(*VAR_4 + VAR_8, 1, VAR_6, VAR_10))) {
  if (FUNC_1(VAR_10))
   break;
  if (FUNC_2(VAR_10)) {
   FUNC_7("failed to read data_in/ctx_in from %s: %s",
         VAR_3, FUNC_10(VAR_1));
   goto err_free;
  }
  if (VAR_8 > VAR_7 - VAR_6) {
   if (VAR_7 == VAR_0) {
    FUNC_7("data_in/ctx_in is too long (max: %d)",
          VAR_0);
    goto err_free;
   }

   VAR_7 *= 2;
   VAR_9 = FUNC_8(*VAR_4, VAR_7);
   if (!VAR_9) {
    FUNC_7("failed to reallocate data_in/ctx_in: %s",
          FUNC_10(VAR_1));
    goto err_free;
   }
   *VAR_4 = VAR_9;
  }
 }
 if (VAR_10 != VAR_2)
  FUNC_0(VAR_10);

 *VAR_5 = VAR_8;
 return 0;

err_free:
 FUNC_5(*VAR_4);
 *VAR_4 = ((void*)0);
err_fclose:
 if (VAR_10 != VAR_2)
  FUNC_0(VAR_10);
 return -1;
}
