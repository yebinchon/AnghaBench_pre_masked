
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int shortbuf ;
typedef int adns_state ;
typedef int adns_rrtype ;
typedef int adns_queryflags ;
typedef int adns_query ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,void*,int *) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,unsigned char const,unsigned char const,unsigned char const,unsigned char const,char const*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(adns_state VAR_4,
       const struct sockaddr *VAR_5,
       const char *VAR_6,
       adns_rrtype VAR_7,
       adns_queryflags VAR_8,
       void *VAR_9,
       adns_query *VAR_10) {
  const unsigned char *VAR_11;
  char *VAR_12, *VAR_13;
  char VAR_14[100];
  int VAR_15, VAR_16;

  VAR_8 &= ~VAR_2;

  if (VAR_5->sa_family != VAR_0) return VAR_1;
  VAR_11= (const unsigned char*) &(((const struct sockaddr_in*)VAR_5) -> sin_addr);

  VAR_16= FUNC_4(VAR_6) + 4*4 + 1;
  if (VAR_16 > (int)sizeof(VAR_14)) {
    VAR_12= FUNC_2( FUNC_4(VAR_6) + 4*4 + 1 );
    if (!VAR_12) return VAR_3;
    VAR_13= VAR_12;
  } else {
    VAR_12= VAR_14;
    VAR_13= 0;
  }
  FUNC_3(VAR_12, "%d.%d.%d.%d.%s", VAR_11[3], VAR_11[2], VAR_11[1], VAR_11[0], VAR_6);

  VAR_15= FUNC_0(VAR_4,VAR_12,VAR_7,VAR_8,VAR_9,VAR_10);
  FUNC_1(VAR_13);
  return VAR_15;
}
