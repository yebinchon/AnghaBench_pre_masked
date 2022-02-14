
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
typedef int nm3 ;
typedef int nm2 ;
typedef int nm ;
typedef int b ;
struct TYPE_3__ {int addr; int cputype; int subtype; int n_segments; int namelen; int size; int segments; int cpu; int bits; int arch; int member_0; } ;
typedef TYPE_1__ SymbolsMetadata ;
typedef int RBuffer ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static SymbolsMetadata FUNC_5(RBuffer *VAR_0, int VAR_1) {
 SymbolsMetadata VAR_2 = { 0 };
 ut8 VAR_3[0x100] = { 0 };
 (void)FUNC_1 (VAR_0, VAR_1, VAR_3, sizeof (VAR_3));
 VAR_2.addr = VAR_1;
 VAR_2.cputype = FUNC_2 (VAR_3);
 VAR_2.arch = FUNC_4 (VAR_2.cputype, &VAR_2.bits);


 VAR_2.subtype = FUNC_2 (VAR_3 + 4);
 VAR_2.cpu = FUNC_3 (VAR_2.subtype);

 VAR_2.n_segments = FUNC_2 (VAR_3 + 8);

 VAR_2.namelen = FUNC_2 (VAR_3 + 0xc);



 int VAR_4 = 16;
 VAR_2.segments = FUNC_0 (VAR_0, VAR_1 + VAR_2.namelen + VAR_4, VAR_2.n_segments);
 VAR_2.size = (VAR_2.n_segments * 32) + 120;


 ut32 VAR_5, VAR_6, VAR_7;
 FUNC_1 (VAR_0, VAR_1 + VAR_2.size, (ut8*)&VAR_5, sizeof (VAR_5));
 FUNC_1 (VAR_0, VAR_1 + VAR_2.size + 4, (ut8*)&VAR_6, sizeof (VAR_6));
 FUNC_1 (VAR_0, VAR_1 + VAR_2.size + 8, (ut8*)&VAR_7, sizeof (VAR_7));

 if (FUNC_2 (&VAR_7) != 0xa1b22b1a) {
  VAR_2.size -= 8;

 }
 return VAR_2;
}
