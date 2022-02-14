
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int **) ;
 int FUNC_1 (char*) ;

int
FUNC_2(PullFilter *VAR_1)
{
 int VAR_2;
 uint8 *VAR_3;

 VAR_2 = FUNC_0(VAR_1, 32 * 1024, &VAR_3);
 if (VAR_2 > 0)
 {
  FUNC_1("pgp_expect_packet_end: got data");
  return VAR_0;
 }
 return VAR_2;
}
