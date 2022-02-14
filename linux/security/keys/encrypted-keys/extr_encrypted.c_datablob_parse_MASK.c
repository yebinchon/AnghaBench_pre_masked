
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char**,char*) ;
 scalar_t__ FUNC_4 (char*,int *) ;

__attribute__((used)) static int FUNC_5(char *VAR_4, const char **VAR_5,
     char **VAR_6, char **VAR_7,
     char **VAR_8)
{
 substring_t VAR_9[VAR_1];
 int VAR_10 = -VAR_0;
 int VAR_11;
 int VAR_12;
 char *VAR_13, *VAR_14;

 VAR_14 = FUNC_3(&VAR_4, " \t");
 if (!VAR_14) {
  FUNC_2("encrypted_key: insufficient parameters specified\n");
  return VAR_10;
 }
 VAR_11 = FUNC_0(VAR_14, VAR_3, VAR_9);


 VAR_13 = FUNC_3(&VAR_4, " \t");
 if (!VAR_13) {
  FUNC_1("encrypted_key: insufficient parameters specified\n");
  return VAR_10;
 }

 VAR_12 = FUNC_0(VAR_13, VAR_2, VAR_9);
 switch (VAR_12) {
 case 134:
 case 133:
 case 135:
  *VAR_5 = VAR_13;
  *VAR_6 = FUNC_3(&VAR_4, " \t");
  break;
 case 131:
  *VAR_6 = VAR_13;
  break;
 }

 if (!*VAR_6) {
  FUNC_2("encrypted_key: master key parameter is missing\n");
  goto out;
 }

 if (FUNC_4(*VAR_6, ((void*)0)) < 0) {
  FUNC_2("encrypted_key: master key parameter \'%s\' "
   "is invalid\n", *VAR_6);
  goto out;
 }

 if (VAR_7) {
  *VAR_7 = FUNC_3(&VAR_4, " \t");
  if (!*VAR_7) {
   FUNC_2("encrypted_key: keylen parameter is missing\n");
   goto out;
  }
 }

 switch (VAR_11) {
 case 129:
  if (!VAR_7) {
   FUNC_2("encrypted_key: keyword \'%s\' not allowed "
    "when called from .update method\n", VAR_14);
   break;
  }
  VAR_10 = 0;
  break;
 case 130:
  if (!VAR_7) {
   FUNC_2("encrypted_key: keyword \'%s\' not allowed "
    "when called from .update method\n", VAR_14);
   break;
  }
  *VAR_8 = FUNC_3(&VAR_4, " \t");
  if (!*VAR_8) {
   FUNC_2("encrypted_key: hex blob is missing\n");
   break;
  }
  VAR_10 = 0;
  break;
 case 128:
  if (VAR_7) {
   FUNC_2("encrypted_key: keyword \'%s\' not allowed "
    "when called from .instantiate method\n",
    VAR_14);
   break;
  }
  VAR_10 = 0;
  break;
 case 132:
  FUNC_2("encrypted_key: keyword \'%s\' not recognized\n",
   VAR_14);
  break;
 }
out:
 return VAR_10;
}
