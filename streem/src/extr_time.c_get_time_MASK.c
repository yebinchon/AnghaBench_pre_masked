
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_time {scalar_t__ ns; } ;
typedef int strm_value ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct strm_time*
FUNC_1(strm_value VAR_2)
{
  struct strm_time* VAR_3 = (struct strm_time*)FUNC_0(VAR_2, VAR_0);
  if (VAR_3->ns != VAR_1) return ((void*)0);
  return VAR_3;
}
