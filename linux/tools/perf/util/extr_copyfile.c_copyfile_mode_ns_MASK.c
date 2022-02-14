
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct nsinfo {int dummy; } ;
struct nscookie {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*,char*,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct nsinfo*,struct nscookie*) ;
 int FUNC_9 (struct nscookie*) ;
 int FUNC_10 (char const*,int ) ;
 int FUNC_11 (char const*,char*,struct nsinfo*) ;
 int FUNC_12 (char const*,struct stat*) ;
 scalar_t__ FUNC_13 (char*) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(const char *VAR_1, const char *VAR_2, mode_t VAR_3,
       struct nsinfo *VAR_4)
{
 int VAR_5, VAR_6;
 struct stat VAR_7;
 int VAR_8;
 char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 struct nscookie VAR_11;

 FUNC_8(VAR_4, &VAR_11);
 VAR_8 = FUNC_12(VAR_1, &VAR_7);
 FUNC_9(&VAR_11);
 if (VAR_8)
  goto out;
 VAR_8 = -1;


 if (FUNC_0(&VAR_9, "%s.XXXXXXx", VAR_2) < 0) {
  VAR_9 = ((void*)0);
  goto out;
 }
 VAR_10 = FUNC_14(VAR_9, '/');
 if (!VAR_10)
  goto out;
 VAR_10 = FUNC_6(VAR_10 + 1, VAR_10, FUNC_13(VAR_10) - 1);
 *VAR_10 = '.';

 VAR_6 = FUNC_7(VAR_9);
 if (VAR_6 < 0)
  goto out;

 if (VAR_7.st_size == 0) {
  VAR_8 = FUNC_11(VAR_1, VAR_9, VAR_4);
  if (!VAR_8 && FUNC_3(VAR_6, VAR_3))
   VAR_8 = -1;
  goto out_close_to;
 }

 if (FUNC_3(VAR_6, VAR_3))
  goto out_close_to;

 FUNC_8(VAR_4, &VAR_11);
 VAR_5 = FUNC_10(VAR_1, VAR_0);
 FUNC_9(&VAR_11);
 if (VAR_5 < 0)
  goto out_close_to;

 VAR_8 = FUNC_2(VAR_5, 0, VAR_6, 0, VAR_7.st_size);

 FUNC_1(VAR_5);
out_close_to:
 FUNC_1(VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_5(VAR_9, VAR_2);
 FUNC_15(VAR_9);
out:
 FUNC_4(VAR_9);
 return VAR_8;
}
