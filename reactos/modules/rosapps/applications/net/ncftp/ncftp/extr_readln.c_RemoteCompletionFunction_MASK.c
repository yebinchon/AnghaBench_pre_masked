
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rpath ;
struct TYPE_6__ {TYPE_1__** vec; } ;
struct TYPE_5__ {char const* relname; scalar_t__ type; } ;
typedef TYPE_1__** FileInfoVec ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_3__* FileInfoListPtr ;


 TYPE_3__* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char const*,size_t) ;
 void* FUNC_9 (char const*,char) ;

__attribute__((used)) static char *
FUNC_10(const char *VAR_2, int VAR_3, int VAR_4)
{
 char VAR_5[256];
 char *VAR_6;
 char *VAR_7;
 const char *VAR_8;
 int VAR_9;
 FileInfoPtr VAR_10;
 FileInfoListPtr VAR_11;
 int VAR_12;
 size_t VAR_13;
 size_t VAR_14, VAR_15;
 static FileInfoVec VAR_16;
 static int VAR_17;

 VAR_8 = FUNC_9(VAR_2, '/');
 if (VAR_8 == ((void*)0)) {
  VAR_8 = VAR_2;
  VAR_12 = -1;
 } else {
  VAR_12 = (int) (VAR_8 - VAR_2);
  VAR_8++;
 }
 VAR_13 = FUNC_7(VAR_8);

 if (VAR_3 == 0) {
  if (VAR_2[0] == '\0') {

   FUNC_3(VAR_5, VAR_0);
  } else {
   FUNC_1(VAR_5, sizeof(VAR_5), VAR_0, VAR_2);
   if (VAR_2[FUNC_7(VAR_2) - 1] == '/') {

    FUNC_2(VAR_5, "/");
   }
   VAR_7 = FUNC_9(VAR_5, '/');
   if (VAR_7 == ((void*)0)) {
    return ((void*)0);
   } else if (VAR_7 == VAR_5) {

    VAR_7++;
   }
   *VAR_7 = '\0';
  }

  VAR_11 = FUNC_0(VAR_5);
  if (VAR_11 == ((void*)0))
   return ((void*)0);

  VAR_16 = VAR_11->vec;
  if (VAR_16 == ((void*)0))
   return ((void*)0);

  VAR_17 = 0;
 }

 for ( ; ; ) {
  VAR_10 = VAR_16[VAR_17];
  if (VAR_10 == ((void*)0))
   break;

  VAR_17++;
  VAR_9 = (int) VAR_10->type;
  if ((VAR_4 == 0) || (VAR_9 == VAR_4) || (VAR_9 == 'l')) {
   if (FUNC_8(VAR_8, VAR_10->relname, VAR_13) == 0) {
    VAR_14 = FUNC_7(VAR_10->relname);
    if (VAR_12 < 0) {
     VAR_15 = VAR_14 + 2;
     VAR_6 = (char *) FUNC_4(VAR_15);
     if (VAR_6 == ((void*)0))
      return (((void*)0));
     (void) FUNC_5(VAR_6, VAR_10->relname, VAR_15);
    } else {
     VAR_15 = VAR_12 + 1 + VAR_14 + 2;
     VAR_6 = (char *) FUNC_4(VAR_15);
     if (VAR_6 == ((void*)0))
      return (((void*)0));
     (void) FUNC_5(VAR_6, VAR_2, (size_t) VAR_12);
     VAR_6[VAR_12] = '/';
     (void) FUNC_6(VAR_6 + VAR_12 + 1, VAR_10->relname);
    }
    if (VAR_9 == 'd') {
     VAR_1 = '/';
    } else {
     VAR_1 = ' ';
    }
    return VAR_6;
   }
  }
 }
 return ((void*)0);
}
