
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ pg_uuid_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static double
FUNC_2(const pg_uuid_t *VAR_1)
{
 uint64 VAR_2[2];
 const double VAR_3 = 18446744073709551616.0;


 FUNC_0(VAR_2, VAR_1->data, VAR_0);







 VAR_2[0] = FUNC_1(VAR_2[0]);
 VAR_2[1] = FUNC_1(VAR_2[1]);
 return (double) VAR_2[0] + (double) VAR_2[1] / VAR_3;
}
