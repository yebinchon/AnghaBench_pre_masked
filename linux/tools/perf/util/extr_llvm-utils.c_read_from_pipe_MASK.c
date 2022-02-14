
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serr ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*,int,int,int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,...) ;
 void* FUNC_8 (void*,size_t) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_6, void **VAR_7, size_t *VAR_8)
{
 int VAR_9 = 0;
 void *VAR_10 = ((void*)0);
 FILE *VAR_11 = ((void*)0);
 size_t VAR_12 = 0, VAR_13 = 0;
 char VAR_14[VAR_4];

 VAR_11 = FUNC_6(VAR_6, "r");
 if (!VAR_11) {
  FUNC_7("ERROR: unable to popen cmd: %s\n",
         FUNC_9(VAR_5, VAR_14, sizeof(VAR_14)));
  return -VAR_0;
 }

 while (!FUNC_1(VAR_11) && !FUNC_2(VAR_11)) {




  if (VAR_13 - VAR_12 < VAR_3 + 1) {
   void *VAR_15;

   VAR_13 = VAR_12 + VAR_3 + 1;
   VAR_15 = FUNC_8(VAR_10, VAR_13);

   if (!VAR_15) {
    FUNC_7("ERROR: failed to realloc memory\n");
    VAR_9 = -VAR_2;
    goto errout;
   }

   VAR_10 = VAR_15;
  }
  VAR_12 += FUNC_3(VAR_10 + VAR_12, 1, VAR_3, VAR_11);
 }

 if (VAR_13 - VAR_12 < 1) {
  FUNC_7("ERROR: internal error\n");
  VAR_9 = -VAR_0;
  goto errout;
 }

 if (FUNC_2(VAR_11)) {
  FUNC_7("ERROR: error occurred when reading from pipe: %s\n",
         FUNC_9(VAR_5, VAR_14, sizeof(VAR_14)));
  VAR_9 = -VAR_1;
  goto errout;
 }

 VAR_9 = FUNC_0(FUNC_5(VAR_11));
 VAR_11 = ((void*)0);
 if (VAR_9) {
  VAR_9 = -VAR_0;
  goto errout;
 }






 ((char *)VAR_10)[VAR_12] = '\0';

 if (!VAR_7)
  FUNC_4(VAR_10);
 else
  *VAR_7 = VAR_10;

 if (VAR_8)
  *VAR_8 = VAR_12;
 return 0;

errout:
 if (VAR_11)
  FUNC_5(VAR_11);
 FUNC_4(VAR_10);
 if (VAR_7)
  *VAR_7 = ((void*)0);
 if (VAR_8)
  *VAR_8 = 0;
 return VAR_9;
}
