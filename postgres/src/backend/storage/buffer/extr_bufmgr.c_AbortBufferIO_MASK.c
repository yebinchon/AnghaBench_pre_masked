
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int blockNum; int forkNum; int rnode; } ;
struct TYPE_9__ {TYPE_1__ tag; } ;
typedef TYPE_2__ BufferDesc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ,int ) ;

void
FUNC_12(void)
{
 BufferDesc *VAR_9 = VAR_5;

 if (VAR_9)
 {
  uint32 VAR_10;







  FUNC_2(FUNC_1(VAR_9), VAR_7);

  VAR_10 = FUNC_3(VAR_9);
  FUNC_0(VAR_10 & VAR_2);
  if (VAR_6)
  {
   FUNC_0(!(VAR_10 & VAR_0));


   FUNC_0(!(VAR_10 & VAR_3));
   FUNC_5(VAR_9, VAR_10);
  }
  else
  {
   FUNC_0(VAR_10 & VAR_0);
   FUNC_5(VAR_9, VAR_10);

   if (VAR_10 & VAR_1)
   {

    char *VAR_11;

    VAR_11 = FUNC_11(VAR_9->tag.rnode, VAR_9->tag.forkNum);
    FUNC_6(VAR_8,
      (FUNC_7(VAR_4),
       FUNC_9("could not write block %u of %s",
        VAR_9->tag.blockNum, VAR_11),
       FUNC_8("Multiple failures --- write error might be permanent.")));
    FUNC_10(VAR_11);
   }
  }
  FUNC_4(VAR_9, 0, VAR_1);
 }
}
