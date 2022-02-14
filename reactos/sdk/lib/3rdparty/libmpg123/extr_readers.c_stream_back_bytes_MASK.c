
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_7__ {TYPE_1__* rd; } ;
typedef TYPE_2__ mpg123_handle ;
struct TYPE_6__ {scalar_t__ (* tell ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(mpg123_handle *VAR_1, off_t VAR_2)
{
 off_t VAR_3 = VAR_1->rd->tell(VAR_1)-VAR_2;
 if(VAR_3 < 0) return VAR_0;
 if(FUNC_0(VAR_1,-VAR_2) != VAR_3) return VAR_0;

 return 0;
}
