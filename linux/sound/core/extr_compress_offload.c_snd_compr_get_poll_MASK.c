
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {scalar_t__ direction; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static __poll_t FUNC_0(struct snd_compr_stream *VAR_5)
{
 if (VAR_5->direction == VAR_4)
  return VAR_1 | VAR_3;
 else
  return VAR_0 | VAR_2;
}
