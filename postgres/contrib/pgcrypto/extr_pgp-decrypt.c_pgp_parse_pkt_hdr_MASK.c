
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *,int,int**) ;
 int FUNC_3 (char*) ;

int
FUNC_4(PullFilter *VAR_2, uint8 *VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 uint8 *VAR_8;


 VAR_7 = FUNC_2(VAR_2, 1, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 == 0)
  return 0;

 if ((*VAR_8 & 0x80) == 0)
 {
  FUNC_3("pgp_parse_pkt_hdr: not pkt hdr");
  return VAR_1;
 }

 if (*VAR_8 & 0x40)
 {
  *VAR_3 = *VAR_8 & 0x3f;
  VAR_7 = FUNC_0(VAR_2, VAR_4);
 }
 else
 {
  VAR_6 = *VAR_8 & 3;
  *VAR_3 = (*VAR_8 >> 2) & 0x0F;
  if (VAR_6 == 3)
   VAR_7 = VAR_5 ? VAR_0 : VAR_1;
  else
   VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_6);
 }
 return VAR_7;
}
