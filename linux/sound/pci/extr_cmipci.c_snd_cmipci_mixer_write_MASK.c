
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cmipci *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 FUNC_0(VAR_3, VAR_2->iobase + VAR_0);
 FUNC_0(VAR_4, VAR_2->iobase + VAR_1);
}
