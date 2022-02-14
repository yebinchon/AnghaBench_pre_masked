
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int len; char* str; } ;
typedef TYPE_2__ TokenString ;
struct TYPE_26__ {int size; scalar_t__ data; } ;
struct TYPE_25__ {TYPE_5__* cstr; } ;
struct TYPE_22__ {scalar_t__ t; } ;
struct TYPE_24__ {int* d; TYPE_1__ type; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ CValue ;
typedef TYPE_5__ CString ;


 int FUNC_0 (int*,int const**,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,char) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int,TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_2__*,TYPE_3__**,int const*,int *) ;
 int FUNC_8 (char*,char*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int,TYPE_4__*) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int *FUNC_14(Sym **VAR_4, const int *VAR_5, Sym *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 const int *VAR_10;
 Sym *VAR_11;
 CValue VAR_12;
 TokenString VAR_13;
 CString VAR_14;

 FUNC_13 (&VAR_13);
 VAR_7 = 0;
 while (FUNC_10 () == 0) {
  FUNC_0 (&VAR_8, &VAR_5, &VAR_12);
  if (!VAR_8) {
   break;
  }
  if (VAR_8 == '#') {

   FUNC_0 (&VAR_8, &VAR_5, &VAR_12);
   if (!VAR_8) {
    break;
   }
   VAR_11 = FUNC_9 (VAR_6, VAR_8);
   if (VAR_11) {
    FUNC_5 (&VAR_14);
    VAR_10 = VAR_11->d;
    VAR_9 = 0;
    while (*VAR_10) {
     FUNC_0 (&VAR_8, &VAR_10, &VAR_12);
     if (!FUNC_1 (VAR_8, &VAR_9)) {
      FUNC_2 (&VAR_14, FUNC_6 (VAR_8, &VAR_12));
     }
    }
    VAR_14.size -= VAR_9;
    FUNC_3 (&VAR_14, '\0');




    VAR_12.cstr = &VAR_14;
    FUNC_12 (&VAR_13, VAR_1, &VAR_12);
    FUNC_4 (&VAR_14);
   } else {
    FUNC_12 (&VAR_13, VAR_8, &VAR_12);
   }
  } else if (VAR_8 >= VAR_0) {
   VAR_11 = FUNC_9 (VAR_6, VAR_8);
   if (VAR_11) {
    VAR_10 = VAR_11->d;

    if (*VAR_5 == VAR_2 || VAR_7 == VAR_2) {





     if (VAR_3 && VAR_11->type.t &&
         VAR_7 == VAR_2 &&
         VAR_13.len >= 2 && VAR_13.str[VAR_13.len - 2] == ',') {
      if (*VAR_10 == 0) {

       VAR_13.len -= 2;
      } else {

       VAR_13.len--;
       goto add_var;
      }
     } else {
      int VAR_15;
add_var:
      for (;;) {
       FUNC_0 (&VAR_15, &VAR_10, &VAR_12);
       if (!VAR_15) {
        break;
       }
       FUNC_12 (&VAR_13, VAR_15, &VAR_12);
      }
     }
    } else {


     FUNC_7 (&VAR_13, VAR_4, VAR_10, ((void*)0));
    }
   } else {
    FUNC_11 (&VAR_13, VAR_8);
   }
  } else {
   FUNC_12 (&VAR_13, VAR_8, &VAR_12);
  }
  VAR_7 = VAR_8;
 }
 FUNC_11 (&VAR_13, 0);
 return VAR_13.str;
}
