
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qu; int * dgram; } ;
typedef TYPE_1__ parseinfo ;
typedef int byte ;
typedef int adns_status ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 char* FUNC_1 (int ,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int const*,size_t) ;

__attribute__((used)) static adns_status FUNC_3(const parseinfo *VAR_3, int *VAR_4, int VAR_5,
         int *VAR_6, char **VAR_7) {



  const byte *VAR_8= VAR_3->dgram;
  int VAR_9, VAR_10;
  char *VAR_11;

  VAR_10= *VAR_4;

  if (VAR_10 >= VAR_5) return VAR_1;
  FUNC_0(VAR_10,VAR_9);
  if (VAR_10+VAR_9 > VAR_5) return VAR_1;

  VAR_11= FUNC_1(VAR_3->qu, (size_t)VAR_9+1);
  if (!VAR_11) VAR_0;

  VAR_11[VAR_9]= 0;
  FUNC_2(VAR_11,VAR_8+VAR_10,(size_t)VAR_9);

  *VAR_6= VAR_9;
  *VAR_7= VAR_11;
  *VAR_4= VAR_10+VAR_9;

  return VAR_2;
}
