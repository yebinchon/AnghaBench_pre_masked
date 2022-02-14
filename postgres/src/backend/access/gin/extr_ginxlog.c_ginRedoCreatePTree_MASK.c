
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
typedef TYPE_1__ ginxlogCreatePostingTree ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef scalar_t__ Page ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 char* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_10(XLogReaderState *VAR_3)
{
 XLogRecPtr VAR_4 = VAR_3->EndRecPtr;
 ginxlogCreatePostingTree *VAR_5 = (ginxlogCreatePostingTree *) FUNC_8(VAR_3);
 char *VAR_6;
 Buffer VAR_7;
 Page VAR_8;

 VAR_7 = FUNC_7(VAR_3, 0);
 VAR_8 = (Page) FUNC_0(VAR_7);

 FUNC_3(VAR_7, VAR_1 | VAR_2 | VAR_0);

 VAR_6 = FUNC_8(VAR_3) + sizeof(ginxlogCreatePostingTree);


 FUNC_9(FUNC_1(VAR_8), VAR_6, VAR_5->size);

 FUNC_2(VAR_8, VAR_5->size);

 FUNC_5(VAR_8, VAR_4);

 FUNC_4(VAR_7);
 FUNC_6(VAR_7);
}
