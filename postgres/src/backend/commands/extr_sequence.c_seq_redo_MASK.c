
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xl_seq_rec ;
typedef scalar_t__ uint8 ;
struct TYPE_8__ {int magic; } ;
typedef TYPE_1__ sequence_magic ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef scalar_t__ Size ;
typedef scalar_t__ Page ;
typedef int Item ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;

void
FUNC_16(XLogReaderState *VAR_6)
{
 XLogRecPtr VAR_7 = VAR_6->EndRecPtr;
 uint8 VAR_8 = FUNC_11(VAR_6) & ~VAR_5;
 Buffer VAR_9;
 Page VAR_10;
 Page VAR_11;
 char *VAR_12;
 Size VAR_13;
 xl_seq_rec *VAR_14 = (xl_seq_rec *) FUNC_9(VAR_6);
 sequence_magic *VAR_15;

 if (VAR_8 != VAR_4)
  FUNC_12(VAR_2, "seq_redo: unknown op code %u", VAR_8);

 VAR_9 = FUNC_8(VAR_6, 0);
 VAR_10 = (Page) FUNC_0(VAR_9);
 VAR_11 = (Page) FUNC_14(FUNC_1(VAR_9));

 FUNC_5(VAR_11, FUNC_1(VAR_9), sizeof(sequence_magic));
 VAR_15 = (sequence_magic *) FUNC_4(VAR_11);
 VAR_15->magic = VAR_3;

 VAR_12 = (char *) VAR_14 + sizeof(xl_seq_rec);
 VAR_13 = FUNC_10(VAR_6) - sizeof(xl_seq_rec);

 if (FUNC_3(VAR_11, (Item) VAR_12, VAR_13,
     VAR_0, 0, 0) == VAR_1)
  FUNC_12(VAR_2, "seq_redo: failed to add item to page");

 FUNC_6(VAR_11, VAR_7);

 FUNC_13(VAR_10, VAR_11, FUNC_1(VAR_9));
 FUNC_2(VAR_9);
 FUNC_7(VAR_9);

 FUNC_15(VAR_11);
}
