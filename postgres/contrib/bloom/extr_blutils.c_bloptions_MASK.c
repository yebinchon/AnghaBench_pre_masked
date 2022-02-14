
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_2__ {int bloomLength; } ;
typedef int Datum ;
typedef TYPE_1__ BloomOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,int ,int ) ;
 int FUNC_1 (int ) ;

bytea *
FUNC_2(Datum VAR_3, bool VAR_4)
{
 BloomOptions *VAR_5;


 VAR_5 = (BloomOptions *) FUNC_0(VAR_3, VAR_4,
              VAR_1,
              sizeof(BloomOptions),
              VAR_2,
              FUNC_1(VAR_2));


 if (VAR_5)
  VAR_5->bloomLength = (VAR_5->bloomLength + VAR_0 - 1) / VAR_0;

 return (bytea *) VAR_5;
}
