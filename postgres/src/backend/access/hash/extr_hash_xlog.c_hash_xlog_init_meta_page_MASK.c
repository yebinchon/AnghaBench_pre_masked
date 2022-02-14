
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ffactor; int procid; int num_tuples; } ;
typedef TYPE_1__ xl_hash_init_meta_page ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef scalar_t__ Page ;
typedef scalar_t__ ForkNumber ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_11(XLogReaderState *VAR_1)
{
 XLogRecPtr VAR_2 = VAR_1->EndRecPtr;
 Page VAR_3;
 Buffer VAR_4;
 ForkNumber VAR_5;

 xl_hash_init_meta_page *VAR_6 = (xl_hash_init_meta_page *) FUNC_9(VAR_1);


 VAR_4 = FUNC_7(VAR_1, 0);
 FUNC_0(FUNC_2(VAR_4));
 FUNC_10(VAR_4, VAR_6->num_tuples, VAR_6->procid,
        VAR_6->ffactor, 1);
 VAR_3 = (Page) FUNC_1(VAR_4);
 FUNC_5(VAR_3, VAR_2);
 FUNC_4(VAR_4);







 FUNC_8(VAR_1, 0, ((void*)0), &VAR_5, ((void*)0));
 if (VAR_5 == VAR_0)
  FUNC_3(VAR_4);


 FUNC_6(VAR_4);
}
