
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_facilities {char pacsize_in; char pacsize_out; char winsize_in; char winsize_out; int throughput; int reverse; } ;
struct x25_dte_facilities {int calling_len; int called_len; int called_ae; int calling_ae; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_0 (unsigned char*,int ,unsigned int) ;

int FUNC_1(unsigned char *VAR_14,
  struct x25_facilities *VAR_15,
  struct x25_dte_facilities *VAR_16, unsigned long VAR_17)
{
 unsigned char *VAR_18 = VAR_14 + 1;
 int VAR_19;

 if (!VAR_17) {




  VAR_14[0] = 0;
  VAR_19 = 1;
  return VAR_19;
 }

 if (VAR_15->reverse && (VAR_17 & VAR_11)) {
  *VAR_18++ = VAR_4;
  *VAR_18++ = VAR_15->reverse;
 }

 if (VAR_15->throughput && (VAR_17 & VAR_12)) {
  *VAR_18++ = VAR_5;
  *VAR_18++ = VAR_15->throughput;
 }

 if ((VAR_15->pacsize_in || VAR_15->pacsize_out) &&
     (VAR_17 & VAR_10)) {
  *VAR_18++ = VAR_3;
  *VAR_18++ = VAR_15->pacsize_in ? : VAR_15->pacsize_out;
  *VAR_18++ = VAR_15->pacsize_out ? : VAR_15->pacsize_in;
 }

 if ((VAR_15->winsize_in || VAR_15->winsize_out) &&
     (VAR_17 & VAR_13)) {
  *VAR_18++ = VAR_6;
  *VAR_18++ = VAR_15->winsize_in ? : VAR_15->winsize_out;
  *VAR_18++ = VAR_15->winsize_out ? : VAR_15->winsize_in;
 }

 if (VAR_17 & (VAR_9|VAR_8)) {
  *VAR_18++ = VAR_7;
  *VAR_18++ = VAR_0;
 }

 if (VAR_16->calling_len && (VAR_17 & VAR_9)) {
  unsigned int VAR_20 = (VAR_16->calling_len + 1) >> 1;
  *VAR_18++ = VAR_2;
  *VAR_18++ = 1 + VAR_20;
  *VAR_18++ = VAR_16->calling_len;
  FUNC_0(VAR_18, VAR_16->calling_ae, VAR_20);
  VAR_18 += VAR_20;
 }

 if (VAR_16->called_len && (VAR_17 & VAR_8)) {
  unsigned int VAR_21 = (VAR_16->called_len % 2) ?
  VAR_16->called_len / 2 + 1 :
  VAR_16->called_len / 2;
  *VAR_18++ = VAR_1;
  *VAR_18++ = 1 + VAR_21;
  *VAR_18++ = VAR_16->called_len;
  FUNC_0(VAR_18, VAR_16->called_ae, VAR_21);
  VAR_18+=VAR_21;
 }

 VAR_19 = VAR_18 - VAR_14;
 VAR_14[0] = VAR_19 - 1;

 return VAR_19;
}
