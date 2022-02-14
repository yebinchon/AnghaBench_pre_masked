
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XLogRecPtr ;
typedef scalar_t__ TimeLineID ;


 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static XLogRecPtr
FUNC_2(void)
{
 XLogRecPtr VAR_1;
 TimeLineID VAR_2;
 XLogRecPtr VAR_3;
 TimeLineID VAR_4;
 XLogRecPtr VAR_5;







 VAR_3 = FUNC_0(((void*)0), &VAR_4);
 VAR_1 = FUNC_1(&VAR_2);

 VAR_0 = VAR_2;

 VAR_5 = VAR_1;
 if (VAR_4 == VAR_0 && VAR_3 > VAR_1)
  VAR_5 = VAR_3;

 return VAR_5;
}
