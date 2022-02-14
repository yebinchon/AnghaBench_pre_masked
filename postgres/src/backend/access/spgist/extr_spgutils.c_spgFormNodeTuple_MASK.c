
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned short t_info; int t_tid; } ;
struct TYPE_6__ {int attLabelType; } ;
typedef TYPE_1__ SpGistState ;
typedef TYPE_2__* SpGistNodeTuple ;
typedef int Size ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 scalar_t__ FUNC_7 (unsigned int) ;

SpGistNodeTuple
FUNC_8(SpGistState *VAR_5, Datum VAR_6, bool VAR_7)
{
 SpGistNodeTuple VAR_8;
 unsigned int VAR_9;
 unsigned short VAR_10 = 0;


 VAR_9 = VAR_4;
 if (!VAR_7)
  VAR_9 += FUNC_2(&VAR_5->attLabelType, VAR_6);





 if ((VAR_9 & VAR_3) != VAR_9)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("index row requires %zu bytes, maximum size is %zu",
      (Size) VAR_9, (Size) VAR_3)));

 VAR_8 = (SpGistNodeTuple) FUNC_7(VAR_9);

 if (VAR_7)
  VAR_10 |= VAR_2;

 VAR_10 |= VAR_9;
 VAR_8->t_info = VAR_10;


 FUNC_0(&VAR_8->t_tid);

 if (!VAR_7)
  FUNC_6(FUNC_1(VAR_8), &VAR_5->attLabelType, VAR_6);

 return VAR_8;
}
