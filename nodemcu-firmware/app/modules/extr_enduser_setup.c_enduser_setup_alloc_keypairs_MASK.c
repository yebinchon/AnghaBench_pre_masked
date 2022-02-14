
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keypairs_t {int keypairs_nb; void* keypairs; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct keypairs_t*,int ,int) ;

__attribute__((used)) static struct keypairs_t * FUNC_2(int VAR_0 ){
    struct keypairs_t *VAR_1 = FUNC_0(sizeof(struct keypairs_t));
    FUNC_1(VAR_1, 0, sizeof(struct keypairs_t));

    VAR_1->keypairs = FUNC_0(VAR_0 * 2 * sizeof(char *));
    VAR_1->keypairs_nb = VAR_0;
    return VAR_1;
}
