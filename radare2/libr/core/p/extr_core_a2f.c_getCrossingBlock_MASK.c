
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int Sdb ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (int *,char const*,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static ut64 FUNC_5(Sdb *VAR_1, const char *VAR_2, ut64 VAR_3, ut64 VAR_4) {
 ut64 VAR_5, VAR_6;
 ut64 VAR_7 = VAR_0;
 const char *VAR_8 = FUNC_3 (VAR_1, VAR_2, ((void*)0));
 const char *VAR_9 = ((void*)0);
 const char *VAR_10 = ((void*)0);
 if (!VAR_8) {
  return VAR_0;
 }
 VAR_10 = VAR_8;
 do {
  VAR_9 = FUNC_2 (VAR_10);
  VAR_5 = FUNC_1 (VAR_10);

  if (VAR_3 == VAR_5) {
   return VAR_3;
  }

  VAR_6 = FUNC_4 (VAR_1, FUNC_0(VAR_5), ((void*)0));
  if (VAR_6) {
   if (VAR_3 > VAR_5 && VAR_3 < VAR_6) {

    return VAR_5;
   }
   if (VAR_3 < VAR_5 && VAR_4 >= VAR_6) {

    if (VAR_7 > VAR_5) {
     VAR_7 = VAR_5;
    }
   }
  }
  VAR_10 = VAR_9;
 } while (VAR_9);

 return VAR_7;
}
