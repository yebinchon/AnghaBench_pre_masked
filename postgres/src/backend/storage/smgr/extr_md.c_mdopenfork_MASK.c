
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mdfd_segno; scalar_t__ mdfd_vfd; } ;
struct TYPE_8__ {scalar_t__* md_num_open_segs; TYPE_2__** md_seg_fds; int smgr_rnode; } ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ MdfdVec ;
typedef size_t ForkNumber ;
typedef scalar_t__ File ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*,size_t,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,size_t) ;

__attribute__((used)) static MdfdVec *
FUNC_10(SMgrRelation VAR_6, ForkNumber VAR_7, int VAR_8)
{
 MdfdVec *VAR_9;
 char *VAR_10;
 File VAR_11;


 if (VAR_6->md_num_open_segs[VAR_7] > 0)
  return &VAR_6->md_seg_fds[VAR_7][0];

 VAR_10 = FUNC_9(VAR_6->smgr_rnode, VAR_7);

 VAR_11 = FUNC_2(VAR_10, VAR_2 | VAR_3);

 if (VAR_11 < 0)
 {
  if ((VAR_8 & VAR_1) &&
   FUNC_1(VAR_5))
  {
   FUNC_8(VAR_10);
   return ((void*)0);
  }
  FUNC_5(VAR_0,
    (FUNC_6(),
     FUNC_7("could not open file \"%s\": %m", VAR_10)));
 }

 FUNC_8(VAR_10);

 FUNC_3(VAR_6, VAR_7, 1);
 VAR_9 = &VAR_6->md_seg_fds[VAR_7][0];
 VAR_9->mdfd_vfd = VAR_11;
 VAR_9->mdfd_segno = 0;

 FUNC_0(FUNC_4(VAR_6, VAR_7, VAR_9) <= ((BlockNumber) VAR_4));

 return VAR_9;
}
