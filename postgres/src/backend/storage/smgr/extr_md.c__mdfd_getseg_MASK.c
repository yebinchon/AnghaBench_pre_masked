
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int mdfd_segno; } ;
struct TYPE_13__ {size_t* md_num_open_segs; TYPE_2__** md_seg_fds; } ;
typedef TYPE_1__* SMgrRelation ;
typedef TYPE_2__ MdfdVec ;
typedef size_t ForkNumber ;
typedef size_t BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,size_t,size_t,int) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t) ;
 size_t FUNC_4 (TYPE_1__*,size_t,TYPE_2__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,size_t,...) ;
 int VAR_12 ;
 int FUNC_9 (TYPE_1__*,size_t,size_t,char*,int) ;
 TYPE_2__* FUNC_10 (TYPE_1__*,size_t,int) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static MdfdVec *
FUNC_13(SMgrRelation VAR_13, ForkNumber VAR_14, BlockNumber VAR_15,
    bool VAR_16, int VAR_17)
{
 MdfdVec *VAR_18;
 BlockNumber VAR_19;
 BlockNumber VAR_20;


 FUNC_0(VAR_17 &
     (VAR_6 | VAR_3 | VAR_7));

 VAR_19 = VAR_15 / ((BlockNumber) VAR_11);


 if (VAR_19 < VAR_13->md_num_open_segs[VAR_14])
 {
  VAR_18 = &VAR_13->md_seg_fds[VAR_14][VAR_19];
  return VAR_18;
 }
 if (VAR_13->md_num_open_segs[VAR_14] > 0)
  VAR_18 = &VAR_13->md_seg_fds[VAR_14][VAR_13->md_num_open_segs[VAR_14] - 1];
 else
 {
  VAR_18 = FUNC_10(VAR_13, VAR_14, VAR_17);
  if (!VAR_18)
   return ((void*)0);
 }

 for (VAR_20 = VAR_13->md_num_open_segs[VAR_14];
   VAR_20 <= VAR_19; VAR_20++)
 {
  BlockNumber VAR_21 = FUNC_4(VAR_13, VAR_14, VAR_18);
  int VAR_22 = 0;

  FUNC_0(VAR_20 == VAR_18->mdfd_segno + 1);

  if (VAR_21 > ((BlockNumber) VAR_11))
   FUNC_5(VAR_8, "segment too big");

  if ((VAR_17 & VAR_3) ||
   (VAR_9 && (VAR_17 & VAR_4)))
  {
   if (VAR_21 < ((BlockNumber) VAR_11))
   {
    char *VAR_23 = FUNC_11(VAR_0);

    FUNC_9(VAR_13, VAR_14,
       VAR_20 * ((BlockNumber) VAR_11) - 1,
       VAR_23, VAR_16);
    FUNC_12(VAR_23);
   }
   VAR_22 = VAR_10;
  }
  else if (!(VAR_17 & VAR_5) &&
     VAR_21 < ((BlockNumber) VAR_11))
  {






   if (VAR_17 & VAR_7)
   {






    VAR_12 = VAR_1;
    return ((void*)0);
   }

   FUNC_6(VAR_2,
     (FUNC_7(),
      FUNC_8("could not open file \"%s\" (target block %u): previous segment is only %u blocks",
       FUNC_3(VAR_13, VAR_14, VAR_20),
       VAR_15, VAR_21)));
  }

  VAR_18 = FUNC_2(VAR_13, VAR_14, VAR_20, VAR_22);

  if (VAR_18 == ((void*)0))
  {
   if ((VAR_17 & VAR_7) &&
    FUNC_1(VAR_12))
    return ((void*)0);
   FUNC_6(VAR_2,
     (FUNC_7(),
      FUNC_8("could not open file \"%s\" (target block %u): %m",
       FUNC_3(VAR_13, VAR_14, VAR_20),
       VAR_15)));
  }
 }

 return VAR_18;
}
