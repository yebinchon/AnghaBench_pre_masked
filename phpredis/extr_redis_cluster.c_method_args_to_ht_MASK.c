
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static HashTable *FUNC_3(zval *VAR_0, int VAR_1) {
    HashTable *VAR_2;
    int VAR_3;


    FUNC_0(VAR_2);
    FUNC_1(VAR_2, VAR_1, ((void*)0), ((void*)0), 0);


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        FUNC_2(VAR_2, &VAR_0[VAR_3]);
    }


    return VAR_2;
}
