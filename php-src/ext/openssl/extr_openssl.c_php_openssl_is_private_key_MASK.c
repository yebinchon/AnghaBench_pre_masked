
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int DSA ;
typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const**,int const**) ;
 int FUNC_1 (int *,int const**,int const**,int const**) ;
 int FUNC_2 (int *,int const**,int const**) ;
 int FUNC_3 (int *,int const**,int const**,int const**) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int FUNC_10 (int *,int const**,int const**) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_13(EVP_PKEY* VAR_1)
{
 FUNC_11(VAR_1 != ((void*)0));

 switch (FUNC_9(VAR_1)) {
  case 129:
  case 128:
   {
    RSA *VAR_2 = FUNC_8(VAR_1);
    if (VAR_2 != ((void*)0)) {
     const BIGNUM *VAR_3, *VAR_4;

     FUNC_10(VAR_2, &VAR_3, &VAR_4);
      if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
      return 0;
      }
    }
   }
   break;
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
   {
    DSA *VAR_5 = FUNC_6(VAR_1);
    if (VAR_5 != ((void*)0)) {
     const BIGNUM *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;

     FUNC_3(VAR_5, &VAR_6, &VAR_7, &VAR_8);
     if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
      return 0;
     }

     FUNC_2(VAR_5, &VAR_9, &VAR_10);
     if (VAR_10 == ((void*)0)) {
      return 0;
     }
    }
   }
   break;
  case 136:
   {
    DH *VAR_11 = FUNC_5(VAR_1);
    if (VAR_11 != ((void*)0)) {
     const BIGNUM *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;

     FUNC_1(VAR_11, &VAR_12, &VAR_13, &VAR_14);
     if (VAR_12 == ((void*)0)) {
      return 0;
     }

     FUNC_0(VAR_11, &VAR_15, &VAR_16);
     if (VAR_16 == ((void*)0)) {
      return 0;
     }
    }
   }
   break;
  default:
   FUNC_12(((void*)0), VAR_0, "key type not supported in this PHP build!");
   break;
 }
 return 1;
}
