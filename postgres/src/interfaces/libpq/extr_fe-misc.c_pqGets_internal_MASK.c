
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* inBuffer; int inCursor; int inEnd; scalar_t__ Pfdebug; } ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(PQExpBuffer VAR_1, PGconn *VAR_2, bool VAR_3)
{

 char *VAR_4 = VAR_2->inBuffer;
 int VAR_5 = VAR_2->inCursor;
 int VAR_6 = VAR_2->inEnd;
 int VAR_7;

 while (VAR_5 < VAR_6 && VAR_4[VAR_5])
  VAR_5++;

 if (VAR_5 >= VAR_6)
  return VAR_0;

 VAR_7 = VAR_5 - VAR_2->inCursor;

 if (VAR_3)
  FUNC_2(VAR_1);

 FUNC_0(VAR_1, VAR_4 + VAR_2->inCursor, VAR_7);

 VAR_2->inCursor = ++VAR_5;

 if (VAR_2->Pfdebug)
  FUNC_1(VAR_2->Pfdebug, "From backend> \"%s\"\n",
    VAR_1->data);

 return 0;
}
