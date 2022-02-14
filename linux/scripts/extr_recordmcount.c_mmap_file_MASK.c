
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_size; int st_mode; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int,TYPE_1__*) ;
 void* FUNC_5 (int ,scalar_t__,int,int ,int,int ) ;
 int VAR_10 ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int,void*,scalar_t__) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_9 (scalar_t__) ;

__attribute__((used)) static void *FUNC_10(char const *VAR_13)
{

 VAR_5 = -1;
 VAR_10 = 1;
 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_9 = 0;
 VAR_11.st_size = 0;

 VAR_5 = FUNC_6(VAR_13, VAR_2);
 if (VAR_5 < 0) {
  FUNC_7(VAR_13);
  return ((void*)0);
 }
 if (FUNC_4(VAR_5, &VAR_11) < 0) {
  FUNC_7(VAR_13);
  goto out;
 }
 if (!FUNC_0(VAR_11.st_mode)) {
  FUNC_2(VAR_12, "not a regular file: %s\n", VAR_13);
  goto out;
 }
 VAR_7 = FUNC_5(0, VAR_11.st_size, VAR_3|VAR_4, VAR_1,
   VAR_5, 0);
 if (VAR_7 == VAR_0) {
  VAR_10 = 1;
  VAR_7 = FUNC_9(VAR_11.st_size);
  if (!VAR_7) {
   FUNC_7(VAR_13);
   goto out;
  }
  if (FUNC_8(VAR_5, VAR_7, VAR_11.st_size) != VAR_11.st_size) {
   FUNC_7(VAR_13);
   FUNC_3(VAR_7);
   VAR_7 = ((void*)0);
   goto out;
  }
 } else
  VAR_10 = 0;
out:
 FUNC_1(VAR_5);
 VAR_5 = -1;

 VAR_6 = VAR_7 + VAR_11.st_size;

 return VAR_7;
}
