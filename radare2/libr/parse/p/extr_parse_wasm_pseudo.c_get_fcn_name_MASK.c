
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {char* (* cmdstrf ) (int ,char*,int ) ;int core; } ;
struct TYPE_5__ {TYPE_1__ coreb; } ;
typedef TYPE_2__ RAnal ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static char* FUNC_4(RAnal *VAR_0, ut32 VAR_1) {
 FUNC_1 ();
 char *VAR_2 = VAR_0->coreb.cmdstrf (VAR_0->coreb.core, "is~FUNC[6:%u]", VAR_1);
 FUNC_0 ();
 if (VAR_2) {
  size_t VAR_3 = FUNC_2 (VAR_2);
  VAR_2[VAR_3 - 1] = 0;
 }
 return VAR_2;
}
