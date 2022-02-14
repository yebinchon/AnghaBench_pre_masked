
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char*,int,int,int ,int ,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_2(const char* VAR_7, char* VAR_8, int VAR_9, int VAR_10, int VAR_11) {
 LZ4_stream_t VAR_12;
 FUNC_1(&VAR_12);

 if (VAR_9 < VAR_0) {
  return FUNC_0(&VAR_12.internal_donotuse, VAR_7, VAR_8, VAR_9, VAR_10, VAR_4, VAR_2, VAR_5, VAR_6, VAR_11);
 }
 return FUNC_0(&VAR_12.internal_donotuse, VAR_7, VAR_8, VAR_9, VAR_10, VAR_4, sizeof(void*)==8 ? VAR_3 : VAR_1, VAR_5, VAR_6, VAR_11);
}
