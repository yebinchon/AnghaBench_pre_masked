
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf2 ;
typedef int buf ;
struct TYPE_6__ {int nFileInfos; TYPE_1__** vec; scalar_t__ maxFileLen; } ;
struct TYPE_5__ {char* relname; char type; scalar_t__ relnameLen; } ;
typedef TYPE_1__** FileInfoVec ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_3__* FileInfoListPtr ;
typedef int FILE ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(FileInfoListPtr VAR_1, int VAR_2, FILE *VAR_3)
{
 char VAR_4[400];
 char VAR_5[400];
 int VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 FileInfoVec VAR_14;
 FileInfoPtr VAR_15;
 char *VAR_16, *VAR_17, *VAR_18;
 int VAR_19;

 VAR_19 = VAR_0;
 if (VAR_19 > 400)
  VAR_19 = 400;
 VAR_6 = (VAR_19 - 1) / ((int) VAR_1->maxFileLen + 2 + VAR_2);
 if (VAR_6 < 1)
  VAR_6 = 1;
 VAR_12 = (VAR_19 - 1) / VAR_6;
 VAR_13 = VAR_1->nFileInfos;
 VAR_7 = VAR_13 / VAR_6;
 if ((VAR_13 % VAR_6) != 0)
  VAR_7++;

 for (VAR_8=0; VAR_8<(int) sizeof(VAR_5); VAR_8++)
  VAR_5[VAR_8] = ' ';

 VAR_14 = VAR_1->vec;

 for (VAR_9=0; VAR_9<VAR_7; VAR_9++) {
  (void) FUNC_2(VAR_4, VAR_5, sizeof(VAR_4));
  for (VAR_8=0, VAR_10=VAR_9, VAR_11=0; VAR_8<VAR_6; VAR_8++, VAR_10 += VAR_7, VAR_11 += VAR_12) {
   if (VAR_10 >= VAR_13)
    continue;
   VAR_15 = VAR_14[VAR_10];
   VAR_16 = VAR_4 + VAR_11;
   VAR_18 = VAR_16 + (int) (VAR_15->relnameLen);
   VAR_17 = VAR_15->relname;
   while (VAR_16 < VAR_18)
    *VAR_16++ = *VAR_17++;
   if (VAR_2 != 0) {
    if (VAR_15->type == 'l') {




     *VAR_16++ = '@';
    } else if (VAR_15->type == 'd') {
     *VAR_16++ = '/';
    }
   }
  }
  for (VAR_16 = VAR_4 + sizeof(VAR_4); *--VAR_16 == ' '; ) {}
  ++VAR_16;
  *VAR_16++ = '\n';
  *VAR_16 = '\0';
  (void) FUNC_1(VAR_3, "%s", VAR_4);
  FUNC_0(0, "%s", VAR_4);
 }
}
