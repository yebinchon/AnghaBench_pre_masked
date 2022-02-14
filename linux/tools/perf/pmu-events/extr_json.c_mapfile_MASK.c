
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int,struct stat*) ;
 char* FUNC_2 (int *,unsigned int,int,int ,int,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static char *FUNC_7(const char *VAR_8, size_t *VAR_9)
{
 unsigned VAR_10 = FUNC_6(VAR_5);
 struct stat VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14 = FUNC_3(VAR_8, VAR_2);

 if (VAR_14 < 0 && VAR_7 > 0 && VAR_8) {
  FUNC_4("Error opening events file '%s': %s\n", VAR_8,
    FUNC_5(VAR_6));
 }

 if (VAR_14 < 0)
  return ((void*)0);
 VAR_13 = FUNC_1(VAR_14, &VAR_11);
 if (VAR_13 < 0)
  goto out;
 *VAR_9 = VAR_11.st_size;
 VAR_12 = FUNC_2(((void*)0),
     (VAR_11.st_size + VAR_10 - 1) & ~(VAR_10 - 1),
     VAR_3|VAR_4, VAR_1, VAR_14, 0);
 if (VAR_12 == VAR_0)
  VAR_12 = ((void*)0);
out:
 FUNC_0(VAR_14);
 return VAR_12;
}
