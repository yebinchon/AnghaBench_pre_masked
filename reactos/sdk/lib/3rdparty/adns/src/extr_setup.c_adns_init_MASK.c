
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
typedef int adns_initflags ;
struct TYPE_13__ {scalar_t__ configerrno; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int,char const*) ;
 int FUNC_3 (TYPE_1__*,char*,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int * VAR_4 ;
 int FUNC_11 (char*,char*) ;

int FUNC_12(adns_state *VAR_5, adns_initflags VAR_6, FILE *VAR_7) {
  adns_state VAR_8;
  const char *VAR_9, *VAR_10;
  int VAR_11;





  VAR_11= FUNC_5(&VAR_8, VAR_6, VAR_7 ? VAR_7 : VAR_4);
  if (VAR_11) return VAR_11;

  VAR_9= FUNC_7(VAR_8,"RES_OPTIONS");
  VAR_10= FUNC_7(VAR_8,"ADNS_RES_OPTIONS");
  FUNC_2(VAR_8,"RES_OPTIONS",-1,VAR_9);
  FUNC_2(VAR_8,"ADNS_RES_OPTIONS",-1,VAR_10);
  FUNC_8(VAR_8,"/etc/resolv.conf",1);
  FUNC_8(VAR_8,"/etc/resolv-adns.conf",0);


  FUNC_9(VAR_8,"RES_CONF");
  FUNC_9(VAR_8,"ADNS_RES_CONF");

  FUNC_10(VAR_8,"RES_CONF_TEXT");
  FUNC_10(VAR_8,"ADNS_RES_CONF_TEXT");

  FUNC_2(VAR_8,"RES_OPTIONS",-1,VAR_9);
  FUNC_2(VAR_8,"ADNS_RES_OPTIONS",-1,VAR_10);

  FUNC_3(VAR_8,"LOCALDOMAIN",-1,FUNC_7(VAR_8,"LOCALDOMAIN"));
  FUNC_3(VAR_8,"ADNS_LOCALDOMAIN",-1,FUNC_7(VAR_8,"ADNS_LOCALDOMAIN"));

  if (VAR_8->configerrno && VAR_8->configerrno != VAR_0) {
    VAR_11= VAR_8->configerrno;
    FUNC_4(VAR_8);
    return VAR_11;
  }

  VAR_11= FUNC_6(VAR_8);
  if (VAR_11) return VAR_11;

  FUNC_1(VAR_8,0,VAR_3);
  *VAR_5= VAR_8;
  return 0;
}
