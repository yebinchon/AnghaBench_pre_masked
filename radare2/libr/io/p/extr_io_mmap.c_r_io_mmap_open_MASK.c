
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filename; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef int RIODesc ;
typedef int RIO ;


 int * FUNC_0 (int *,int *,int ,int,int,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,char const*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static RIODesc *FUNC_3(RIO *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
 if (!FUNC_2 (VAR_2, "mmap://", 7)) {
  VAR_2 += 7;
 }
 RIOMMapFileObj *VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_4, VAR_3);
 return VAR_5? FUNC_0 (VAR_1, &VAR_0, VAR_5->filename, VAR_3, VAR_4, VAR_5): ((void*)0);
}
