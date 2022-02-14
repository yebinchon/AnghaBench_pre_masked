
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
struct TYPE_4__ {char* (* cmdstrf ) (int ,char*,int ) ;int core; } ;
struct TYPE_5__ {TYPE_1__ coreb; } ;
typedef TYPE_2__ RAnal ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int const*,int const*,int *) ;
 char* FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static ut64 FUNC_6(RAnal *VAR_1, const ut8 *VAR_2, int VAR_3) {
 ut32 VAR_4;

 if (!FUNC_4 (&VAR_2[1], &VAR_2[VAR_3 - 1], &VAR_4)) {
  return VAR_0;
 }
 FUNC_2 ();


 char *VAR_5 = VAR_1->coreb.cmdstrf (VAR_1->coreb.core, "is~FUNC[2:%u]", VAR_4);
 FUNC_1 ();
 if (VAR_5) {
  ut64 VAR_6 = FUNC_3 (((void*)0), VAR_5);
  FUNC_0 (VAR_5);
  return VAR_6;
 }
 return VAR_0;
}
