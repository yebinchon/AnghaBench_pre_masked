
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HashTable ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(double VAR_3, double VAR_4, HashTable *VAR_5) {
    if (VAR_3 < 0L || VAR_3 > VAR_1) {
        FUNC_0("Invalid timeout", 0);
        return VAR_0;
    }
    if (VAR_4 < 0L || VAR_4 > VAR_1) {
        FUNC_0("Invalid read timeout", 0);
        return VAR_0;
    }

    if (FUNC_1(VAR_5) == 0) {
        FUNC_0("Must pass seeds", 0);
        return VAR_0;
    }

    return VAR_2;
}
