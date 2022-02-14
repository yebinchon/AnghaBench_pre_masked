
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* text; } ;
typedef TYPE_1__ getline_ctx ;
typedef int adns_state ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,char*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(adns_state VAR_1, getline_ctx *VAR_2, const char *VAR_3,
     int VAR_4, char *VAR_5, int VAR_6) {
  const char *VAR_7= VAR_2->text;
  int VAR_8;

  if (!VAR_7 || !*VAR_7) return -1;

  if (*VAR_7 == ';' || *VAR_7 == '\n') VAR_7++;
  VAR_8= FUNC_3(VAR_7,";\n");
  VAR_2->text = VAR_7+VAR_8;

  if (VAR_8 >= VAR_6) {
    FUNC_0(VAR_1,-1,0,"%s:%d: line too long, ignored",VAR_3,VAR_4);
    FUNC_2(VAR_1,VAR_0);
    return -2;
  }

  FUNC_1(VAR_5,VAR_7,VAR_8);
  VAR_5[VAR_8]= 0;
  return VAR_8;
}
