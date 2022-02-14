
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int blkno; int forkno; int node; } ;
typedef TYPE_1__ xl_invalid_page_key ;
struct TYPE_7__ {int present; } ;
typedef TYPE_2__ xl_invalid_page ;
typedef int ctl ;
struct TYPE_8__ {int keysize; int entrysize; } ;
typedef int RelFileNode ;
typedef TYPE_3__ HASHCTL ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (char*,int,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *,void*,int ,int*) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (scalar_t__,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(RelFileNode VAR_10, ForkNumber VAR_11, BlockNumber VAR_12,
     bool VAR_13)
{
 xl_invalid_page_key VAR_14;
 xl_invalid_page *VAR_15;
 bool VAR_16;
 if (VAR_9)
 {
  FUNC_4(VAR_5, VAR_10, VAR_11, VAR_12, VAR_13);
  FUNC_0(VAR_4, "WAL contains references to invalid pages");
 }






 if (VAR_8 <= VAR_0 || VAR_6 <= VAR_0)
  FUNC_4(VAR_0, VAR_10, VAR_11, VAR_12, VAR_13);

 if (VAR_7 == ((void*)0))
 {

  HASHCTL VAR_17;

  FUNC_3(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.keysize = sizeof(xl_invalid_page_key);
  VAR_17.entrysize = sizeof(xl_invalid_page);

  VAR_7 = FUNC_1("XLOG invalid-page table",
            100,
            &VAR_17,
            VAR_2 | VAR_1);
 }


 VAR_14.node = VAR_10;
 VAR_14.forkno = VAR_11;
 VAR_14.blkno = VAR_12;
 VAR_15 = (xl_invalid_page *)
  FUNC_2(VAR_7, (void *) &VAR_14, VAR_3, &VAR_16);

 if (!VAR_16)
 {

  VAR_15->present = VAR_13;
 }
 else
 {

 }
}
