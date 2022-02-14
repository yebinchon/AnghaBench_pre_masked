
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hashm_maxbucket; int hashm_lowmask; } ;
typedef int Relation ;
typedef TYPE_1__* HashMetaPage ;
typedef int Buffer ;
typedef int Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

BlockNumber
FUNC_6(Relation VAR_3, Bucket VAR_4)
{
 Bucket VAR_5;
 Buffer VAR_6;
 HashMetaPage VAR_7;
 BlockNumber VAR_8;

 VAR_6 = FUNC_4(VAR_3, VAR_0, VAR_1, VAR_2);
 VAR_7 = FUNC_2(FUNC_1(VAR_6));

 VAR_5 = FUNC_3(VAR_3, VAR_4,
             VAR_7->hashm_lowmask,
             VAR_7->hashm_maxbucket);
 VAR_8 = FUNC_0(VAR_7, VAR_5);

 FUNC_5(VAR_3, VAR_6);

 return VAR_8;
}
