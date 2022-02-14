
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* path; int * (* cat ) (int *,int *,char const*) ;} ;
typedef int RFSRoot ;
typedef int RFSFile ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int ) ;
 int * FUNC_2 (int *,int *,char const*) ;

__attribute__((used)) static RFSFile* FUNC_3(RFSRoot *VAR_1, const char *VAR_2, bool VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_0[VAR_4].path; VAR_4++) {
  const char *VAR_5 = VAR_0[VAR_4].path;
  if (VAR_0[VAR_4].cat && !FUNC_1 (VAR_2, VAR_5, FUNC_0 (VAR_5))) {
   return VAR_0[VAR_4].cat (VAR_1, ((void*)0), VAR_2);
  }
 }
 return ((void*)0);
}
