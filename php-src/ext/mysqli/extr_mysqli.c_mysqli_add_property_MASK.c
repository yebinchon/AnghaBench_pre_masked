
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mysqli_write_t ;
typedef scalar_t__ mysqli_read_t ;
struct TYPE_3__ {int name; scalar_t__ write_func; scalar_t__ read_func; } ;
typedef TYPE_1__ mysqli_prop_handler ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int) ;
 int FUNC_1 (char const*,size_t,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(HashTable *VAR_2, const char *VAR_3, size_t VAR_4, mysqli_read_t VAR_5, mysqli_write_t VAR_6) {
 mysqli_prop_handler VAR_7;

 VAR_7.name = FUNC_1(VAR_3, VAR_4, 1);
 VAR_7.read_func = (VAR_5) ? VAR_5 : VAR_0;
 VAR_7.write_func = (VAR_6) ? VAR_6 : VAR_1;
 FUNC_0(VAR_2, VAR_7.name, &VAR_7, sizeof(mysqli_prop_handler));
 FUNC_2(VAR_7.name, 1);
}
