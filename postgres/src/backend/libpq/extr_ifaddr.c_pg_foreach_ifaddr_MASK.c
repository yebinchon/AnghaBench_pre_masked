
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_addr; } ;
struct ifconf {char* ifc_buf; size_t ifc_len; struct ifreq* ifc_req; } ;
typedef scalar_t__ pgsocket ;
typedef int mask ;
typedef int ifc ;
typedef int addr ;
typedef int PgIfAddrCallback ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ifreq) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,...) ;
 int FUNC_4 (struct ifreq*,struct ifreq*,int) ;
 int FUNC_5 (struct ifconf*,int ,int) ;
 char* FUNC_6 (char*,size_t) ;
 int FUNC_7 (int ,void*,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

int
FUNC_9(PgIfAddrCallback VAR_9, void *VAR_10)
{
 struct ifconf VAR_11;
 struct ifreq *VAR_12,
      *VAR_13,
    VAR_14,
    VAR_15;
 char *VAR_16,
      *VAR_17 = ((void*)0);
 size_t VAR_18 = 1024;
 pgsocket VAR_19;

 VAR_19 = FUNC_8(VAR_0, VAR_7, 0);
 if (VAR_19 == VAR_3)
  return -1;

 while (VAR_18 < 1024 * 100)
 {
  VAR_18 += 1024;
  VAR_16 = FUNC_6(VAR_17, VAR_18);
  if (!VAR_16)
  {
   FUNC_2(VAR_17);
   FUNC_1(VAR_19);
   VAR_8 = VAR_2;
   return -1;
  }

  FUNC_5(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.ifc_buf = VAR_17 = VAR_16;
  VAR_11.ifc_len = VAR_18;

  if (FUNC_3(VAR_19, VAR_5, &VAR_11) < 0)
  {
   if (VAR_8 == VAR_1)
    continue;
   FUNC_2(VAR_17);
   FUNC_1(VAR_19);
   return -1;
  }






  if (VAR_11.ifc_len < VAR_18 - 1024)
   break;
 }

 VAR_13 = (struct ifreq *) (VAR_17 + VAR_11.ifc_len);
 for (VAR_12 = VAR_11.ifc_req; VAR_12 < VAR_13;)
 {
  FUNC_4(&VAR_14, VAR_12, sizeof(VAR_14));
  FUNC_4(&VAR_15, VAR_12, sizeof(VAR_15));
  if (FUNC_3(VAR_19, VAR_4, &VAR_14, sizeof(VAR_14)) == 0 &&
   FUNC_3(VAR_19, VAR_6, &VAR_15, sizeof(VAR_15)) == 0)
   FUNC_7(VAR_9, VAR_10,
        &VAR_14.ifr_addr, &VAR_15.ifr_addr);
  VAR_12 = (struct ifreq *) ((char *) VAR_12 + FUNC_0(*VAR_12));
 }

 FUNC_2(VAR_17);
 FUNC_1(VAR_19);
 return 0;
}
