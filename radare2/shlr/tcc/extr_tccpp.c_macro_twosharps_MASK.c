
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int len; int* str; } ;
typedef TYPE_1__ TokenString ;
struct TYPE_13__ {scalar_t__* buf_ptr; int buffer; } ;
struct TYPE_12__ {int size; scalar_t__ data; } ;
typedef int CValue ;
typedef TYPE_2__ CString ;


 int FUNC_0 (int*,int const**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_6__* VAR_2 ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_11 (char*,int,char*,char*) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static inline int *FUNC_15(const int *VAR_6)
{
 const int *VAR_7;
 int VAR_8;
 TokenString VAR_9;
 CString VAR_10;
 int VAR_11, VAR_12;


 for (VAR_7 = VAR_6;;) {
  CValue VAR_13;
  FUNC_0 (&VAR_8, &VAR_7, &VAR_13);
  if (VAR_8 == VAR_1) {
   break;
  }

  if (VAR_8 == 0) {
   return ((void*)0);
  }
 }


 VAR_12 = -1;
 FUNC_14 (&VAR_9);
 for (VAR_7 = VAR_6;;) {
  FUNC_0 (&VAR_4, &VAR_7, &VAR_5);
  if (VAR_4 == 0) {
   break;
  }
  if (VAR_4 == VAR_1) {
   continue;
  }
  if (VAR_4 == VAR_0 && VAR_12 < 0) {
   VAR_12 = VAR_9;
  }
  while (*VAR_7 == VAR_1) {

   if (VAR_12 >= 0) {
    VAR_9 = VAR_12;
   }

   VAR_8 = *++VAR_7;

   while (VAR_8 == VAR_0)
    VAR_8 = *++VAR_7;
   if (VAR_8 && VAR_8 != VAR_1) {
    CValue VAR_14;
    FUNC_0 (&VAR_8, &VAR_7, &VAR_14);

    FUNC_4 (&VAR_10);
    FUNC_1 (&VAR_10, FUNC_5 (VAR_4, &VAR_5));
    VAR_11 = VAR_10.size;
    FUNC_1 (&VAR_10, FUNC_5 (VAR_8, &VAR_14));
    FUNC_2 (&VAR_10, '\0');

    FUNC_10 (VAR_3, ":paste:", VAR_10.size);
    FUNC_6 (VAR_2->buffer, VAR_10.data, VAR_10.size);
    while (FUNC_9 () == 0) {
     FUNC_7 ();
     if (0 == *VAR_2->buf_ptr) {
      break;
     }
     FUNC_13 (&VAR_9, VAR_4, &VAR_5);
     FUNC_11 ("pasting \"%.*s\" and \"%s\" does not give a valid preprocessing token",
      VAR_11, (char *) VAR_10.data, (char *) VAR_10.data + VAR_11);
    }
    FUNC_8 ();
    FUNC_3 (&VAR_10);
   }
  }
  if (VAR_4 != VAR_0) {
   VAR_12 = -1;
  }
  FUNC_13 (&VAR_9, VAR_4, &VAR_5);
 }
 FUNC_12 (&VAR_9, 0);
 return VAR_9;
}
