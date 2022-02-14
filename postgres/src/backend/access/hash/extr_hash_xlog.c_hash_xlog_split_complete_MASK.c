
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int new_bucket_flag; int old_bucket_flag; } ;
typedef TYPE_1__ xl_hash_split_complete ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_9__ {int hasho_flag; } ;
typedef int Page ;
typedef TYPE_3__* HashPageOpaque ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 xl_hash_split_complete *VAR_4 = (xl_hash_split_complete *) FUNC_7(VAR_2);
 Buffer VAR_5;
 Buffer VAR_6;
 XLogRedoAction VAR_7;


 VAR_7 = FUNC_6(VAR_2, 0, &VAR_5);





 if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
 {
  Page VAR_8;
  HashPageOpaque VAR_9;

  VAR_8 = FUNC_0(VAR_5);
  VAR_9 = (HashPageOpaque) FUNC_3(VAR_8);

  VAR_9->hasho_flag = VAR_4->old_bucket_flag;

  FUNC_4(VAR_8, VAR_3);
  FUNC_2(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_5(VAR_5);


 VAR_7 = FUNC_6(VAR_2, 1, &VAR_6);





 if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
 {
  Page VAR_10;
  HashPageOpaque VAR_11;

  VAR_10 = FUNC_0(VAR_6);
  VAR_11 = (HashPageOpaque) FUNC_3(VAR_10);

  VAR_11->hasho_flag = VAR_4->new_bucket_flag;

  FUNC_4(VAR_10, VAR_3);
  FUNC_2(VAR_6);
 }
 if (FUNC_1(VAR_6))
  FUNC_5(VAR_6);
}
