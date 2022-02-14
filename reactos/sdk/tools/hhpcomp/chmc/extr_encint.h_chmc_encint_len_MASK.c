
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;



__attribute__((used)) static inline int FUNC_0 ( const UInt32 VAR_0 ) {
 int VAR_1;


 if ( VAR_0 > 0xfffffffUL )
  VAR_1 = 0;
 else if ( VAR_0 > 0x1fffffUL )
  VAR_1 = 4;
 else if ( VAR_0 > 0x3fffUL )
  VAR_1 = 3;
 else if ( VAR_0 > 0x7fUL )
  VAR_1 = 2;
 else
  VAR_1 = 1;

 return VAR_1;
}
