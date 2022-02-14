
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef int int32 ;
struct TYPE_4__ {char* curop; char* op; int lenop; int sumlen; } ;
typedef TYPE_1__ QPRS_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (TYPE_1__*,int,int ,int,int,int ) ;
 scalar_t__ FUNC_6 (void*,int) ;

__attribute__((used)) static void
FUNC_7(QPRS_STATE *VAR_2, int VAR_3, char *VAR_4, int VAR_5, uint16 VAR_6)
{
 if (VAR_5 > 0xffff)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("word is too long")));

 FUNC_5(VAR_2, VAR_3, FUNC_3(VAR_4, VAR_5),
     VAR_2->curop - VAR_2->op, VAR_5, VAR_6);

 while (VAR_2->curop - VAR_2->op + VAR_5 + 1 >= VAR_2->lenop)
 {
  int32 VAR_7 = VAR_2->curop - VAR_2->op;

  VAR_2->lenop *= 2;
  VAR_2->op = (char *) FUNC_6((void *) VAR_2->op, VAR_2->lenop);
  VAR_2->curop = VAR_2->op + VAR_7;
 }
 FUNC_4((void *) VAR_2->curop, (void *) VAR_4, VAR_5);
 VAR_2->curop += VAR_5;
 *(VAR_2->curop) = '\0';
 VAR_2->curop++;
 VAR_2->sumlen += VAR_5 + 1;
 return;
}
