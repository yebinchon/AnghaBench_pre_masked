
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct stat*) ;
 void* FUNC_3 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_4 (char const*,int ) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 struct stat VAR_8, VAR_9;
 void *VAR_10, *VAR_11;
 bool VAR_12 = 0;

 VAR_6 = FUNC_4(VAR_4, VAR_2);
 if (VAR_6 < 0)
  return VAR_12;

 VAR_7 = FUNC_4(VAR_5, VAR_2);
 if (VAR_7 < 0)
  goto close1;

 VAR_12 = FUNC_2(VAR_6, &VAR_8);
 if (VAR_12)
  goto close2;
 VAR_12 = FUNC_2(VAR_7, &VAR_9);
 if (VAR_12)
  goto close2;

 if (VAR_8 != VAR_9)
  goto close2;

 VAR_10 = FUNC_3(((void*)0), VAR_8, VAR_3, VAR_1, VAR_6, 0);
 if (VAR_10 == VAR_0)
  goto close2;

 VAR_11 = FUNC_3(((void*)0), VAR_9, VAR_3, VAR_1, VAR_7, 0);
 if (VAR_11 == VAR_0)
  goto close2;

 if (FUNC_0(VAR_10, VAR_11, VAR_8))
  goto close2;

 VAR_12 = 1;
close2:
 FUNC_1(VAR_7);
close1:
 FUNC_1(VAR_6);

 return VAR_12;
}
